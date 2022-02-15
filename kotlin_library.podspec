Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '0.1.11'
    spec.homepage                 = 'https://github.com/SpiderSwift/kotlin-library'
    spec.authors                  = { 'Artyom Pishchalov' => 'artem.pishchalov@gmail.com' }
    spec.source                   = { :git => 'https://github.com/SpiderSwift/kotlin-library.git', :tag => spec.version.to_s }
    spec.license                  = { :type => 'Apache-2.0 License', :file => 'LICENSE' }
    spec.summary                  = 'Test library compiled with Kotlin'
    spec.vendored_frameworks      = "build/fat-framework/release/kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"
    spec.ios.deployment_target    = '9.0'
    spec.pod_target_xcconfig      = { 'PRODUCT_MODULE_NAME' => 'kotlin_library', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
