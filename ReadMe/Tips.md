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
## 2.设置slef.title = "购物车"是tabBarItem的title会显示出来
京东app的tabbar的Image是带有title文字信息的,所以不再需要文字信息.设置sel.navigationBar.titl = "购物车",这样tabbar不会显示title

## 3.

