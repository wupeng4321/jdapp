#  tips
## 1. setter and getter

```
var _abcd:String?

var abcd:String? {
    get {
        return _abcd
        }
    set (str){
        _abcd = str
        }
}
```
## 2. 设置slef.title = "购物车"是tabBarItem的title会显示出来
京东app的tabbar的Image是带有title文字信息的,所以不再需要文字信息.设置sel.navigationBar.title = "购物车",这样tabbar不会显示title

## 3. UICollectionView的header类似UITableView的plain风格
see jdapp/Common/Views/UICollectionViewPlainLayout

## 4. UICollectionView的header遮住滚动条
在viewDidAppear中遍历collectionView的subViews,将verticalndectior的zPosition调整为1

```
extension UIScrollView {
    func verticalIndicatorToFront() {
        let arr = self.subviews
            for view in arr {
                if type(of: view) == UIImageView.classForCoder() {
                    view.layer.zPosition = view.frame.size.width < 10 ? 1 : 0
            }
        }
    }
}
```
## 5. 利用反射机制加载类
```
//需要添加命名空间,默认为项目名称
let clsName = "jdapp.BaseViewController"
let cls = NSClassFromString(clsName) as? UIViewController.Type
let vc = cls.init()
```

## 通过给函数设定默认值,在调用的时候,如果指定使用指定值,如果不指定,使用默认值
```
func sum(_ x: Int = 1, _ y: Int = 2) -> Int {
    return x + y
}

sum(3) = 3 + 2 = 5
sum(3, 4) = 3 + 4 = 7
```

