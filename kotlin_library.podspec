Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '0.1.3'
    spec.homepage                 = 'https://github.com/SpiderSwift/kotlin-library'
    spec.authors                  = { 'Artyom Pishchalov' => 'artem.pishchalov@gmail.com' }
    spec.source                   = { :git => 'https://github.com/SpiderSwift/kotlin-library.git', :tag => spec.version.to_s }
    spec.license                  = { :type => 'Apache-2.0 License', :file => 'LICENSE' }
    spec.summary                  = 'Test library compiled with Kotlin'

    spec.vendored_frameworks      = "build/bin/iosArm64/releaseFramework/kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '13.5'

    spec.pod_target_xcconfig = {
        'PRODUCT_MODULE_NAME' => 'kotlin_library',
    }

    spec.prepare_command = <<-SCRIPT
      set -ev
      ./gradlew --no-daemon linkReleaseFrameworkIosArm64
    SCRIPT

end