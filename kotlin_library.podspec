Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '1.0'
    spec.homepage                 = 'https://github.com/SpiderSwift/kotlin-library'
    spec.authors                  = 'SpiderSwift'
    spec.source                   = { :git => "https://github.com/SpiderSwift/kotlin-library" }
    spec.license                  = 'Apache-2.0 License'
    spec.summary                  = 'CocoaPods test library'

    spec.vendored_frameworks      = "kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.pod_target_xcconfig = {
        'PRODUCT_MODULE_NAME' => 'kotlin_library',
    }

end