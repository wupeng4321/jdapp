//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AQRecorder {
    unsigned long long _field1;
    struct __CFString *_field2;
    struct OpaqueAudioQueue *_field3;
    struct AudioQueueBuffer *_field4[3];
    struct OpaqueAudioFileID *_field5;
    long long _field6;
    struct CAStreamBasicDescription _field7;
    unsigned char _field8;
};

struct ARModel;

struct ARView {
    struct IrrlichtDevice *_field1;
    struct IVideoDriver *_field2;
    struct ISceneManager *_field3;
    struct dimension2d<unsigned int> _field4;
    struct ARModel *_field5;
    struct ICameraSceneNode *_field6;
    _Bool _field7;
    _Bool _field8;
    unsigned int _field9;
    unsigned int _field10;
    _Bool _field11;
};

struct AudioQueueBuffer;

struct BCSegment {
    union BCPoint _field1;
    union BCPoint _field2;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColor;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CNMat {
    char *_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct COCheckoutPKMargin {
    double top;
    double right;
    double bottom;
    double left;
};

struct CameraCalib {
    CDUnknownFunctionPointerType *_field1;
};

struct Context {
    CDUnknownFunctionPointerType *_field1;
};

struct FaceStatus {
    struct RectI _field1;
    struct RectI _field2;
    struct RectI _field3;
    _Bool _field4;
    int _field5[10];
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10[6];
    int _field11;
    float _field12;
    float _field13;
    int _field14;
};

struct GLHairDyeingRender {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct Gallery {
    CDUnknownFunctionPointerType *_field1;
};

struct ICameraSceneNode;

struct ISceneManager;

struct IVideoDriver;

struct Id {
    unsigned char uuid[16];
};

struct Image {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    char *_field5;
};

struct IrrlichtDevice;

struct JDCNFaceStatus {
    struct CGRect _field1;
    int _field2[10];
};

struct JDCNSilenceConfig {
    float maxTimePerPeriod;
    _Bool isMultiFacesON;
    unsigned long long silenceMode;
    struct CGRect validFaceBounds;
};

struct KSJSONDecodeCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct LOT_Subpath {
    int _field1;
    double _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
    struct LOT_Subpath *_field6;
};

struct LipParameter {
    int _field1;
    unsigned char _field2;
    unsigned char _field3;
};

struct LivenessResult {
    int _field1;
    Rect__ef479948 _field2;
    struct vector<cv::Point_<double>, std::__1::allocator<cv::Point_<double>>> _field3;
    int _field4;
    char *_field5;
    int _field6;
};

struct LoginScanFaceIosRender {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
};

struct ModuleData;

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct NSURL {
    Class _field1;
    id _field2;
    id _field3;
    void *_field4;
    void *_field5;
};

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct Point_<double>;

struct Preprocessor {
    CDUnknownFunctionPointerType *_field1;
};

struct RCTJSContextData {
    _Bool _field1;
    id _field2;
    id _field3;
};

struct RandomAccessBundleData {
    struct unique_ptr<__sFILE, int (*)(__sFILE *)> bundle;
    unsigned long long baseOffset;
    unsigned long long numTableEntries;
    struct unique_ptr<ModuleData [], std::__1::default_delete<ModuleData []>> table;
};

struct Recognizer {
    CDUnknownFunctionPointerType *_field1;
};

struct RectI {
    int left;
    int top;
    int right;
    int bottom;
};

struct Rect_<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct ShareOrderSOZoomTransitionAlphaRange {
    double startValue;
    double endValue;
};

struct TDP3dView;

struct TDPARView;

struct TDPCallback {
    CDUnknownFunctionPointerType *_field1;
    struct TDPStruct *_field2;
};

struct TDPICallbacks;

struct TDPImuView;

struct TDPManager {
    struct IrrlichtDevice *_field1;
    struct IVideoDriver *_field2;
    struct ISceneManager *_field3;
    struct dimension2d<unsigned int> _field4;
    struct TDPICallbacks *_field5;
    _Bool _field6;
    struct TDPModelSubManager *_field7;
    struct TDP3dView *_field8;
    struct TDPARView *_field9;
    struct TDPImuView *_field10;
};

struct TDPModelSubManager;

struct TDPStruct;

struct TargetInfo {
    int targetId;
    struct Id modelId;
    float recogScore;
    unsigned long long recogTimestamp;
    float pose[3][4];
    int state;
    float trackingScore;
    unsigned long long trackingTimestamp;
};

struct TimestamperInfo {
    CDUnknownFunctionPointerType callback;
    void *stub;
};

struct Tracker {
    CDUnknownFunctionPointerType *_field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIEdgeOffsets {
    double left;
    double top;
    double width;
    double height;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UPAFileRef {
    int _field1;
};

struct UPPPasswordUtil;

struct UPPProguardUtil {
    int _field1;
};

struct UPPasswordTool {
    struct UPPProguardUtil *_field1;
    struct UPPPasswordUtil *_field2;
    int _field3;
};

struct Vector2D {
    double _field1;
    double _field2;
};

struct WBSDKJKConstBuffer {
    struct WBSDKJKConstPtrRange _field1;
};

struct WBSDKJKConstPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKEncodeCache {
    id _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKEncodeState {
    struct WBSDKJKManagedBuffer _field1;
    struct WBSDKJKManagedBuffer _field2;
    unsigned long long _field3;
    struct WBSDKJKFastClassLookup _field4;
    struct WBSDKJKEncodeCache _field5[1024];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    SEL _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownBlockType _field13;
};

struct WBSDKJKFastClassLookup {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
};

struct WBSDKJKHashTableEntry {
    unsigned long long _field1;
    id _field2;
    id _field3;
};

struct WBSDKJKManagedBuffer {
    struct WBSDKJKPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct WBSDKJKObjCImpCache {
    Class _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct WBSDKJKObjectStack {
    void **_field1;
    void **_field2;
    unsigned long long *_field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct WBSDKJKParseState {
    unsigned long long _field1;
    struct WBSDKJKConstBuffer _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct WBSDKJKParseToken _field9;
    struct WBSDKJKObjectStack _field10;
    struct WBSDKJKTokenCache _field11;
    struct WBSDKJKObjCImpCache _field12;
    id _field13;
    int _field14;
    _Bool _field15;
};

struct WBSDKJKParseToken {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    struct WBSDKJKTokenValue _field3;
    struct WBSDKJKManagedBuffer _field4;
};

struct WBSDKJKPtrRange {
    char *_field1;
    unsigned long long _field2;
};

struct WBSDKJKTokenCache {
    struct WBSDKJKTokenCacheItem *_field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned char _field4[1024];
};

struct WBSDKJKTokenCacheItem;

struct WBSDKJKTokenValue {
    struct WBSDKJKConstPtrRange _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    union {
        long long _field1;
        unsigned long long _field2;
        double _field3;
    } _field4;
    struct WBSDKJKTokenCacheItem *_field5;
};

struct WareShareSOZoomTransitionAlphaRange {
    double startValue;
    double endValue;
};

struct YGValue {
    float value;
    int unit;
};

struct _HiARSize {
    long long width;
    long long height;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _Vector2f {
    float _field1;
    float _field2;
};

struct _Vector2i {
    int _field1;
    int _field2;
};

struct _Vector3f {
    float _field1;
    float _field2;
    float _field3;
};

struct _Vector3i {
    int _field1;
    int _field2;
    int _field3;
};

struct _Vector4f {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct _Vector4i {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *__data_;
                    unsigned long long __size_;
                    unsigned long long __cap_;
                } __l;
                struct __short {
                    char __data_[23];
                    struct {
                        unsigned char __size_;
                    } ;
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct dimension2d<unsigned int> {
    unsigned int _field1;
    unsigned int _field2;
};

struct hostent {
    char *_field1;
    char **_field2;
    int _field3;
    int _field4;
    char **_field5;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct jdsrt_metrics {
    unsigned int rmx_locks;
    unsigned int rmx_mtu;
    unsigned int rmx_hopcount;
    int rmx_expire;
    unsigned int rmx_recvpipe;
    unsigned int rmx_sendpipe;
    unsigned int rmx_ssthresh;
    unsigned int rmx_rtt;
    unsigned int rmx_rttvar;
    unsigned int rmx_pksent;
    unsigned int rmx_filler[4];
};

struct jdsrt_msghdr2 {
    unsigned short rtm_msglen;
    unsigned char rtm_version;
    unsigned char rtm_type;
    unsigned short rtm_index;
    int rtm_flags;
    int rtm_addrs;
    int rtm_refcnt;
    int rtm_parentflags;
    int rtm_reserved;
    int rtm_use;
    unsigned int rtm_inits;
    struct jdsrt_metrics rtm_rmx;
};

struct map<hiar::Id, HiARItem *, std::__1::less<hiar::Id>, std::__1::allocator<std::__1::pair<const hiar::Id, HiARItem *>>> {
    struct __tree<std::__1::__value_type<hiar::Id, HiARItem *>, std::__1::__map_value_compare<hiar::Id, std::__1::__value_type<hiar::Id, HiARItem *>, std::__1::less<hiar::Id>, true>, std::__1::allocator<std::__1::__value_type<hiar::Id, HiARItem *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<hiar::Id, HiARItem *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<hiar::Id, std::__1::__value_type<hiar::Id, HiARItem *>, std::__1::less<hiar::Id>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct msgpack_object {
    int _field1;
    union {
        _Bool _field1;
        unsigned long long _field2;
        long long _field3;
        double _field4;
        struct {
            unsigned int _field1;
            struct msgpack_object *_field2;
        } _field5;
        struct {
            unsigned int _field1;
            struct msgpack_object_kv *_field2;
        } _field6;
        struct {
            unsigned int _field1;
            char *_field2;
        } _field7;
    } _field2;
};

struct msgpack_object_kv;

struct msgpack_packer {
    void *_field1;
    CDUnknownFunctionPointerType _field2;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct sockaddr {
    unsigned char sa_len;
    unsigned char sa_family;
    char sa_data[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct tagActionFinish {
    _Bool prepare;
    _Bool NodUp;
    _Bool NodDown;
    _Bool ShakeH;
    _Bool ShakeL;
    _Bool ShakeR;
    _Bool Mouth;
    _Bool Blink;
};

struct unique_ptr<ModuleData [], std::__1::default_delete<ModuleData []>> {
    struct __compressed_pair<ModuleData *, std::__1::default_delete<ModuleData []>> {
        struct ModuleData *__first_;
    } __ptr_;
};

struct unique_ptr<__sFILE, int (*)(__sFILE *)> {
    struct __compressed_pair<__sFILE *, int (*)(__sFILE *)> {
        struct __sFILE *__first_;
        CDUnknownFunctionPointerType __second_;
    } __ptr_;
};

struct vector<cv::Point_<double>, std::__1::allocator<cv::Point_<double>>> {
    struct Point_<double> *_field1;
    struct Point_<double> *_field2;
    struct __compressed_pair<cv::Point_<double>*, std::__1::allocator<cv::Point_<double>>> {
        struct Point_<double> *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<hiar::TargetInfo, std::__1::allocator<hiar::TargetInfo>> {
    struct TargetInfo *__begin_;
    struct TargetInfo *__end_;
    struct __compressed_pair<hiar::TargetInfo *, std::__1::allocator<hiar::TargetInfo>> {
        struct TargetInfo *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long count;
    double *array;
} CDStruct_3b9f1d24;

typedef struct {
    char *_field1;
    char *_field2;
} CDStruct_91a0c811;

typedef struct {
    double min;
    double mid;
    double max;
} CDStruct_b9b47a9c;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    long long x;
    long long y;
    short z;
    int language;
} CDStruct_43274f37;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned long long count;
    double baseLine;
    double lineHeight;
    struct __CTLine **lines;
    double *widths;
} CDStruct_7a56664d;

typedef struct {
    CDUnknownFunctionPointerType _field1;
    unsigned long long _field2;
    struct *_field3[0];
} CDStruct_da19c24b;

typedef struct {
    struct CGColor *_field1;
    struct CGColor *_field2;
    struct CGColor *_field3;
    struct CGColor *_field4;
} CDStruct_a5ac02f4;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CLLocationCoordinate2D center;
    CDStruct_951efa70 span;
} CDStruct_b7cb895d;

typedef struct {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned long long _field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_91f2099a;

// Ambiguous groups
typedef struct {
    unsigned int numberOfTabsInSiftView:1;
    unsigned int cellForTabAtIndex:1;
} CDStruct_8fac2e83;

typedef struct {
    unsigned int widthOfTabAtIndex:1;
    unsigned int didClickTabAtIndex:1;
} CDStruct_bf7fe323;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double left;
    double right;
    double top;
    double bottom;
} CDStruct_6c514524;

typedef struct {
    double timeout;
    double maximumAge;
    double accuracy;
    double distanceFilter;
} CDStruct_0ddf8746;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitudeDelta;
    double longitudeDelta;
} CDStruct_951efa70;

typedef struct {
    double leftScale;
    double rightScale;
} CDStruct_8b3280d7;

typedef struct Rect_<int> {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} Rect__ef479948;

typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

#pragma mark Named Unions

union BCPoint {
    struct {
        double _field1;
        double _field2;
    } _field1;
    double _field2[2];
};

union BCTrapezoid {
    struct {
        union BCPoint _field1;
        union BCPoint _field2;
        union BCPoint _field3;
        union BCPoint _field4;
    } _field1;
    union BCPoint _field2[4];
};

union _GLKMatrix2 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field1;
    float _field2[2][2];
    float _field3[4];
};

union _GLKMatrix3 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
    } _field1;
    float _field2[9];
};

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

