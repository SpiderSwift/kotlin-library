Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '0.1.1'
    spec.homepage                 = 'https://github.com/SpiderSwift/kotlin-library'
    spec.authors                  = 'Pishchalau Artsem'
    spec.source                   = { :git => 'https://github.com/SpiderSwift/kotlin-library.git', :tag => '0.1.1' }
    spec.license                  = 'Apache-2.0 License'
    spec.summary                  = 'Test library compiled with Kotlin'

    spec.vendored_frameworks      = "kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '13.5'

    spec.pod_target_xcconfig = {
        'PRODUCT_MODULE_NAME' => 'kotlin_library',
    }

end