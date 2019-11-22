#
# Be sure to run `pod lib lint XALFrameworksRelease.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XALFrameworksRelease'
  s.version          = '0.0.1'
  s.summary          = 'A short description of XALFrameworksRelease.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/zhangfenglin/framework-Release'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhangfenglin' => 'zhangfenglin@apusapps.com' }
  s.source           = { :git => 'https://github.com/zhangfenglin/framework-Release.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.3'

  s.source_files = 'XALFrameworksRelease/Classes/**/*'
  
  # s.resource_bundles = {
  #   'XALFrameworksRelease' => ['XALFrameworksRelease/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  
  s.subspec "APSLibraryAdapter" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSLibraryAdapter.framework"
      ss.dependency 'XALFrameworks/APSActivate'
      ss.dependency 'XALFrameworks/APSCloud'
      ss.dependency 'XALFrameworks/APSSupport3rd'
      ss.dependency 'XALFrameworks/APSAlex'
  end
  
  s.subspec "APSActivate" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSActivate.framework"
      ss.dependency 'XALFrameworks/APSUtilities'
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      ss.dependency 'XALFrameworks/APSAdjust'
      
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
      
  end
  
  s.subspec "APSCloud" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSCloud.framework"
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      ss.dependency 'XALFrameworks/APSUtilities'
      
      ss.dependency 'FMDB', '2.7.5'
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
  end
  
  s.subspec "APSAlex" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSAlex.framework"
      ss.dependency 'XALFrameworks/APSUtilities'
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
      ss.dependency 'FMDB', '2.7.5'
      
  end
  
  s.subspec "APSSupport3rd" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSSupport3rd.framework"
      ss.dependency 'XALFrameworks/du'
      ss.dependency 'Adjust', '4.18.0'
      ss.dependency 'Flurry-iOS-SDK', '9.3.1'
      
  end
  
  
  s.subspec "APSMiddleware" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSMiddleware.framework"
  end
  
  s.subspec "APSSdkService" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSSdkService.framework"
  end
  
  s.subspec "APSZeus" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSZeus.framework"
      ss.dependency 'XALFrameworks/APSLogServer'
      
      ss.dependency 'AFNetworking', '3.2.1'
  end
  
  s.subspec "APSAdjust" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSAdjust.framework"
      
      ss.dependency 'Adjust', '4.18.0'
  end
  
  s.subspec "APSLogServer" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSLogServer.framework"
      
      ss.dependency 'GCDWebServer', '3.5.3'
  end
  
  s.subspec "APSUtilities" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSUtilities.framework"
      
      ss.dependency 'Reachability', '3.2'
      ss.dependency 'SAMKeychain', '1.5.3'
  end
  
  s.subspec "APSRouter" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSRouter.framework"
  end
  
  s.subspec "APSFcmPush" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSFcmPush.framework"
      
      ss.dependency 'XALFrameworks/APSAlex'
      ss.dependency 'Firebase/Core' ,'~> 6.11.0'
      ss.dependency 'Firebase/Messaging' ,'~> 6.11.0'
      ss.dependency 'AFNetworking', '~> 3.2.1'
  end
  
  s.subspec "du" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/du.framework"
  end
  
  #s.source_files = 'XALFrameworks/Classes/**/*'
  
  s.pod_target_xcconfig = {'ENABLE_BITCODE' => 'NO', 'VALID_ARCHS[sdk=iphonesimulator*]' => ''}  
end
