import org.jetbrains.kotlin.gradle.tasks.FatFrameworkTask
import org.jetbrains.kotlin.gradle.plugin.mpp.NativeBuildType.RELEASE

plugins {
    kotlin("multiplatform") version "1.6.10"
}

group = "by.citech"
version = "0.1.3"

repositories {
    google()
    mavenCentral()
}

kotlin {
    val iosArm32 = iosArm32()
    val iosArm64 = iosArm64()
    val iosX64 = iosX64()

    val frameworkName = "kotlin_library"

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(kotlin("stdlib"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.6.0-native-mt")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
    }

    configure(listOf(iosArm32, iosArm64, iosX64)) {
        binaries.framework {
            baseName = frameworkName
        }
    }

    tasks.create("releaseFatFramework", FatFrameworkTask::class) {
        baseName = frameworkName
        from(
            iosArm32.binaries.getFramework(RELEASE),
            iosArm64.binaries.getFramework(RELEASE),
            iosX64.binaries.getFramework(RELEASE)
        )
        destinationDir = buildDir.resolve("fat-framework/release")
        group = "Universal framework"
        description = "Builds a universal (fat) release framework"
    }
}