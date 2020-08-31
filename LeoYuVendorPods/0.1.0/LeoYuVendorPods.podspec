
Pod::Spec.new do |s|
  s.name             = 'LeoYuVendorPods'
  s.version          = '0.1.0'
  s.summary          = '3rd party libs without CocoaPods support.'
  s.license          = { :type => 'MIT', :text => <<-LICENSE
  Dummy text to silence license warning :)
  LICENSE
}
  s.homepage         = 'https://www.github.com'
  s.author           = '3rd Parties'
  s.source           = { :git => "https://github.com/yuleonetscapenet/TestVendorsHack.git",
                        :tag => "#{s.version}"
}
  s.platform         = :ios, '12.0'
  
  s.subspec 'Veritix' do |veritix|
    veritix.vendored_frameworks = "Pods/Veritix/AXSSDKMobile.framework"
  end


end
