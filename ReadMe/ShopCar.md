

![JDShopCar.jpg](http://upload-images.jianshu.io/upload_images/3265262-e5a8fc508f69204b.jpg?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

#  购物车的实现
## 数据抓包

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

