
Pod::Spec.new do |s|
  s.name             = 'LeoYuVendorPods'
  s.version          = '0.11.0'
  s.summary          = '3rd party libs without CocoaPods support.'
  s.license          = { :type => 'MIT', :text => <<-LICENSE
  Dummy text to silence license warning :)
  LICENSE
}
  s.homepage         = 'https://www.github.com'
  s.author           = '3rd Parties'
  s.source           = { :git => "https://github.com/yuleonetscapenet/singlePodRepo.git"
}
  s.platform         = :ios, '12.0'

s.subspec 'Veritix' do |veritix|
    veritix.source_files = "Pods/Veritix/*.h"
    veritix.vendored_library = "Pods/Veritix/libSimilityRecon.a"
  end

s.subspec 'iOS-SecureEntrySDK' do |secureEntrySDK|
   secureEntrySDK.source_files = "Pods/iOS-SecureEntrySDK/**"
end

end
