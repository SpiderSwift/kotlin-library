Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '0.1.5'
    spec.homepage                 = 'https://github.com/SpiderSwift/kotlin-library'
    spec.authors                  = { 'Artyom Pishchalov' => 'artem.pishchalov@gmail.com' }
    spec.source                   = { :git => 'https://github.com/SpiderSwift/kotlin-library.git', :tag => spec.version.to_s }
    spec.license                  = { :type => 'Apache-2.0 License', :file => 'LICENSE' }
    spec.summary                  = 'Test library compiled with Kotlin'

    spec.vendored_frameworks      = "build/bin/iosX64/releaseFramework/kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '9.0'

    spec.pod_target_xcconfig = {
        'PRODUCT_MODULE_NAME' => 'kotlin_library',
    }

    # spec.prepare_command = <<-SCRIPT
    #   set -ev
    #   ./gradlew --no-daemon linkReleaseFrameworkIosX64
    # SCRIPT

end
