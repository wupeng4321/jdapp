# Uncomment the next line to define a global platform for your project
platform :ios, '9.0'
install! 'cocoapods',
generate_multiple_pod_projects:true,
incremental_installation:true



#  # Comment the next line if you're not using Swift and don't want to use dynamic frameworks
  use_frameworks!

def fundation
    pod 'Alamofire', '~>4.5.0'    #AFNetworking
    pod 'ReactiveCocoa', '~> 10.0' #handle events
    pod 'SnapKit', '~> 4.0.0'     #layout
    pod 'SwiftyJSON', '~> 4.0.0'  #MJExtension
    pod 'Kingfisher', '~> 4.5.0'  #SDWebImage
    pod 'SDCycleScrollView','~> 1.75'
#    pod 'SDWebImage/WebP'
end

target 'jdapp' do
    fundation
end

target 'jdappTests' do
#    fundation
end

target 'jdappUITests' do
#    fundation
end

