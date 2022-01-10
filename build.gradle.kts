plugins {
    kotlin("multiplatform") version "1.5.31"
    kotlin("native.cocoapods") version "1.5.31"
}

group = "by.citech"
version = "1.0-SNAPSHOT"

repositories {
    google()
    jcenter()
    mavenCentral()
}

kotlin {
    ios()
    iosArm64()

    cocoapods {
        ios.deploymentTarget = "13.5"
        summary = "CocoaPods test library"
        homepage = "https://github.com/JetBrains/kotlin"
        // podfile = project.file("../ios-app/Podfile")
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(kotlin("stdlib"))
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.5.2-native-mt") {
                    version {
                        strictly("1.5.2-native-mt")
                    }
                }
            }
        }
        val iosMain by getting
    }
}