

![JDShopCar.jpg](http://upload-images.jianshu.io/upload_images/3265262-e5a8fc508f69204b.jpg?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

#  购物车的实现
## 数据抓包
### 熟练使用charles,[推荐唐巧大神的这篇文章](http://blog.devtang.com/2015/11/14/charles-introduction/#Charles__u9650_u65F6_u4F18_u60E0)
### 熟练使用postman,[这里是下载地址](https://www.getpostman.com/apps)
### 在熟悉以上的两个软件后,开始抓包
1. 用charles开启代理本机,开机真机代理,由于可能会有https,要相应的允许ssl并下载证书.在iphone的浏览器打开charles提示的网址,安装提示的文件,这样charles可以同事抓到电脑和iphone的数据包
2. 开始模拟http请求,对比模拟的请求头和抓到jdapp的数据的请求头和body,先利用postman模拟实现,然后开始代码实现
3. postman的请求实现后,代码模拟,这一步最重要,因为涉及到编码的问题,在charles里面可以看到自己发送的请求,然后和jdapp的请求作对比

adid=87BCDF77-D843-46E9-B7E5-83F18FA67806&area=12_904_905_50599&body=%7B%22specialId%22%3A%221%22%2C%22noResponse%22%3Afalse%2C%22cartuuid%22%3A%22coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr%22%2C%22carttype%22%3A%221%22%2C%22syntype%22%3A%221%22%2C%22adid%22%3A%2287BCDF77-D843-46E9-B7E5-83F18FA67806%22%2C%22openudid%22%3A%2274d33ae25b8353446044bf7100a174275196c178%22%7D&build=163840&client=apple&clientVersion=6.6.0&d_brand=apple&d_model=iPhone9%2C2&isBackground=N&lang=zh_CN&networkType=wifi&networklibtype=JDNetworkBaseAF&openudid=74d33ae25b8353446044bf7100a174275196c178&osVersion=11.1.2&partner=apple&screen=1242%2A2208&sign=6b2b859e96a070c830ec9578821c920a&st=1515245622880&sv=121&uuid=coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr

4. 提示一点,由于抓到的包是已经编码过,我们需要解码后,再通过Alamofire编码才能不出错

## 页面结构
### 思考页面采用UITableView还是UICollectionView

初看,带有section的header悬停效果,感觉采用UITableView,然后选择.plain模式就可以.往下滑动的时候出现了为你推荐栏目,每一行有两个item,这是典型的UIcollectionViewCell的布局方式.

如果一行有两个item用UITableView也可以写,只需要将一个cell写两个item,相应的数据结构改变一下,但是这种做法感觉怪怪的.

如果用UICollectionView写的话,由于没有自带plain的悬停效果,需要自定义flowout.在网上找了一篇文章[UicollectionView的Header悬停效果](https://github.com/HebeTienCoder/XLPlainFlowLayout)

### 页面三部分结构

1. 购物车的商品信息

2. 为你推荐

3. 底部"去结算"

## 功能实现

