Pod::Spec.new do |spec|
    spec.name                     = 'kotlin_library'
    spec.version                  = '1.0-SNAPSHOT'
    spec.homepage                 = 'https://github.com/JetBrains/kotlin'
    spec.source                   = { :git => "Not Published", :tag => "Cocoapods/#{spec.name}/#{spec.version}" }
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'CocoaPods test library'

    spec.vendored_frameworks      = "build/cocoapods/framework/kotlin_library.framework"
    spec.libraries                = "c++"
    spec.module_name              = "#{spec.name}_umbrella"

    spec.ios.deployment_target = '13.5'

                

    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':',
        'PRODUCT_MODULE_NAME' => 'kotlin_library',
    }

    spec.prepare_command = <<-SCRIPT
      set -ev
      ./gradlew --no-daemon -Pframework=#{spec.name}.framework linkReleaseFrameworkIos --stacktrace --info
    SCRIPT
end