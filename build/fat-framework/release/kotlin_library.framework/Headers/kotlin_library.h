#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Kotlin_libraryReqInputResult, Kotlin_libraryRspInputResult, Kotlin_libraryInputResult, Kotlin_libraryLayerTimings, Kotlin_libraryKotlinEnumCompanion, Kotlin_libraryKotlinEnum<E>, Kotlin_libraryKotlinArray<T>, Kotlin_libraryReqTimings, Kotlin_libraryRspHandler<I>, Kotlin_libraryReqRspLayer<O, I>, Kotlin_libraryInputAdapter<I>, Kotlin_libraryOutputAdapter<O>, Kotlin_libraryReqHandler<I, O>, Kotlin_libraryTransportAdapter<O>, Kotlin_libraryLocalReqCtx<I, O>, Kotlin_libraryOutputSrc<O>, Kotlin_libraryRemoteReqCtx<O>, Kotlin_libraryReqMeta, Kotlin_libraryRspMeta, Kotlin_libraryRsp<I>, Kotlin_libraryLogLvl, Kotlin_libraryMutableOutputSrc<O>, Kotlin_libraryRspResult;

@protocol Kotlin_libraryKotlinComparable, Kotlin_libraryLogDst, Kotlin_libraryKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Kotlin_libraryBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Kotlin_libraryBase (Kotlin_libraryBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Kotlin_libraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Kotlin_libraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlin_libraryKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Kotlin_libraryNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Kotlin_libraryByte : Kotlin_libraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Kotlin_libraryUByte : Kotlin_libraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Kotlin_libraryShort : Kotlin_libraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Kotlin_libraryUShort : Kotlin_libraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Kotlin_libraryInt : Kotlin_libraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Kotlin_libraryUInt : Kotlin_libraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Kotlin_libraryLong : Kotlin_libraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Kotlin_libraryULong : Kotlin_libraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Kotlin_libraryFloat : Kotlin_libraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Kotlin_libraryDouble : Kotlin_libraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Kotlin_libraryBoolean : Kotlin_libraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputResult")))
@interface Kotlin_libraryInputResult : Kotlin_libraryBase
- (instancetype)initWithReq:(Kotlin_libraryReqInputResult *)req rsp:(Kotlin_libraryRspInputResult *)rsp __attribute__((swift_name("init(req:rsp:)"))) __attribute__((objc_designated_initializer));
- (Kotlin_libraryReqInputResult *)component1 __attribute__((swift_name("component1()")));
- (Kotlin_libraryRspInputResult *)component2 __attribute__((swift_name("component2()")));
- (Kotlin_libraryInputResult *)doCopyReq:(Kotlin_libraryReqInputResult *)req rsp:(Kotlin_libraryRspInputResult *)rsp __attribute__((swift_name("doCopy(req:rsp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isReq __attribute__((swift_name("isReq()")));
- (BOOL)isRsp __attribute__((swift_name("isRsp()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Kotlin_libraryReqInputResult *req __attribute__((swift_name("req")));
@property (readonly) Kotlin_libraryRspInputResult *rsp __attribute__((swift_name("rsp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayerTimings")))
@interface Kotlin_libraryLayerTimings : Kotlin_libraryBase
- (instancetype)initWithRspStoreTimeout:(int64_t)rspStoreTimeout reqStoreTimeout:(int64_t)reqStoreTimeout __attribute__((swift_name("init(rspStoreTimeout:reqStoreTimeout:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (Kotlin_libraryLayerTimings *)doCopyRspStoreTimeout:(int64_t)rspStoreTimeout reqStoreTimeout:(int64_t)reqStoreTimeout __attribute__((swift_name("doCopy(rspStoreTimeout:reqStoreTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t reqStoreTimeout __attribute__((swift_name("reqStoreTimeout")));
@property (readonly) int64_t rspStoreTimeout __attribute__((swift_name("rspStoreTimeout")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Kotlin_libraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Kotlin_libraryKotlinEnum<E> : Kotlin_libraryBase <Kotlin_libraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Kotlin_libraryKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReqInputResult")))
@interface Kotlin_libraryReqInputResult : Kotlin_libraryKotlinEnum<Kotlin_libraryReqInputResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kotlin_libraryReqInputResult *noReq __attribute__((swift_name("noReq")));
@property (class, readonly) Kotlin_libraryReqInputResult *consumed __attribute__((swift_name("consumed")));
@property (class, readonly) Kotlin_libraryReqInputResult *duplicate __attribute__((swift_name("duplicate")));
+ (Kotlin_libraryKotlinArray<Kotlin_libraryReqInputResult *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ReqRspLayer")))
@interface Kotlin_libraryReqRspLayer<O, I> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Kotlin_libraryInputResult *)inputRspBody:(I _Nullable)rspBody currTs:(int64_t)currTs __attribute__((swift_name("input(rspBody:currTs:)")));
- (void)outputReqBody:(O _Nullable)reqBody currTs:(int64_t)currTs reqTimings:(Kotlin_libraryReqTimings * _Nullable)reqTimings rspHandler:(Kotlin_libraryRspHandler<I> * _Nullable)rspHandler __attribute__((swift_name("output(reqBody:currTs:reqTimings:rspHandler:)")));
- (void)processStateCurrTs:(int64_t)currTs __attribute__((swift_name("processState(currTs:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReqRspLayerFactory")))
@interface Kotlin_libraryReqRspLayerFactory<I, O> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Kotlin_libraryReqRspLayer<O, I> *)createLogId:(NSString *)logId inputAdapter:(Kotlin_libraryInputAdapter<I> *)inputAdapter outputAdapter:(Kotlin_libraryOutputAdapter<O> *)outputAdapter reqHandler:(Kotlin_libraryReqHandler<I, O> *)reqHandler transportAdapter:(Kotlin_libraryTransportAdapter<O> *)transportAdapter reqTimings:(Kotlin_libraryReqTimings *)reqTimings layerTimings:(Kotlin_libraryLayerTimings *)layerTimings logDst:(id<Kotlin_libraryLogDst>)logDst __attribute__((swift_name("create(logId:inputAdapter:outputAdapter:reqHandler:transportAdapter:reqTimings:layerTimings:logDst:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReqTimings")))
@interface Kotlin_libraryReqTimings : Kotlin_libraryBase
- (instancetype)initWithRspTimeout:(int64_t)rspTimeout reqRepeatInterval:(int64_t)reqRepeatInterval __attribute__((swift_name("init(rspTimeout:reqRepeatInterval:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t reqRepeatInterval __attribute__((swift_name("reqRepeatInterval")));
@property (readonly) int64_t rspTimeout __attribute__((swift_name("rspTimeout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RspInputResult")))
@interface Kotlin_libraryRspInputResult : Kotlin_libraryKotlinEnum<Kotlin_libraryRspInputResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kotlin_libraryRspInputResult *noRsp __attribute__((swift_name("noRsp")));
@property (class, readonly) Kotlin_libraryRspInputResult *duplicate __attribute__((swift_name("duplicate")));
@property (class, readonly) Kotlin_libraryRspInputResult *unknownReq __attribute__((swift_name("unknownReq")));
@property (class, readonly) Kotlin_libraryRspInputResult *consumedWithHandler __attribute__((swift_name("consumedWithHandler")));
@property (class, readonly) Kotlin_libraryRspInputResult *consumedWithoutHandler __attribute__((swift_name("consumedWithoutHandler")));
+ (Kotlin_libraryKotlinArray<Kotlin_libraryRspInputResult *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalReqCtx")))
@interface Kotlin_libraryLocalReqCtx<I, O> : Kotlin_libraryBase
- (instancetype)initWithReqBody:(O _Nullable)reqBody repeatInterval:(int64_t)repeatInterval timeoutAfterTs:(int64_t)timeoutAfterTs rspHandler:(Kotlin_libraryRspHandler<I> * _Nullable)rspHandler reqCnt:(int64_t)reqCnt nextRepeatAfterTs:(int64_t)nextRepeatAfterTs handledTs:(Kotlin_libraryLong * _Nullable)handledTs __attribute__((swift_name("init(reqBody:repeatInterval:timeoutAfterTs:rspHandler:reqCnt:nextRepeatAfterTs:handledTs:)"))) __attribute__((objc_designated_initializer));
- (O _Nullable)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (Kotlin_libraryRspHandler<I> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (Kotlin_libraryLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (Kotlin_libraryLocalReqCtx<I, O> *)doCopyReqBody:(O _Nullable)reqBody repeatInterval:(int64_t)repeatInterval timeoutAfterTs:(int64_t)timeoutAfterTs rspHandler:(Kotlin_libraryRspHandler<I> * _Nullable)rspHandler reqCnt:(int64_t)reqCnt nextRepeatAfterTs:(int64_t)nextRepeatAfterTs handledTs:(Kotlin_libraryLong * _Nullable)handledTs __attribute__((swift_name("doCopy(reqBody:repeatInterval:timeoutAfterTs:rspHandler:reqCnt:nextRepeatAfterTs:handledTs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property Kotlin_libraryLong * _Nullable handledTs __attribute__((swift_name("handledTs")));
@property int64_t nextRepeatAfterTs __attribute__((swift_name("nextRepeatAfterTs")));
@property (readonly) int64_t repeatInterval __attribute__((swift_name("repeatInterval")));
@property (readonly) O _Nullable reqBody __attribute__((swift_name("reqBody")));
@property int64_t reqCnt __attribute__((swift_name("reqCnt")));
@property (readonly) Kotlin_libraryRspHandler<I> * _Nullable rspHandler __attribute__((swift_name("rspHandler")));
@property (readonly) int64_t timeoutAfterTs __attribute__((swift_name("timeoutAfterTs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteReqCtx")))
@interface Kotlin_libraryRemoteReqCtx<O> : Kotlin_libraryBase
- (instancetype)initWithRspBodySrc:(Kotlin_libraryOutputSrc<O> *)rspBodySrc handledTs:(int64_t)handledTs rspCnt:(int64_t)rspCnt __attribute__((swift_name("init(rspBodySrc:handledTs:rspCnt:)"))) __attribute__((objc_designated_initializer));
- (Kotlin_libraryOutputSrc<O> *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (Kotlin_libraryRemoteReqCtx<O> *)doCopyRspBodySrc:(Kotlin_libraryOutputSrc<O> *)rspBodySrc handledTs:(int64_t)handledTs rspCnt:(int64_t)rspCnt __attribute__((swift_name("doCopy(rspBodySrc:handledTs:rspCnt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t handledTs __attribute__((swift_name("handledTs")));
@property (readonly) Kotlin_libraryOutputSrc<O> *rspBodySrc __attribute__((swift_name("rspBodySrc")));
@property int64_t rspCnt __attribute__((swift_name("rspCnt")));
@end;

__attribute__((swift_name("InputAdapter")))
@interface Kotlin_libraryInputAdapter<I> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Kotlin_libraryReqMeta * _Nullable)extractReqMetaBody:(I _Nullable)body __attribute__((swift_name("extractReqMeta(body:)")));
- (Kotlin_libraryRspMeta * _Nullable)extractRspMetaBody:(I _Nullable)body __attribute__((swift_name("extractRspMeta(body:)")));
@end;

__attribute__((swift_name("OutputAdapter")))
@interface Kotlin_libraryOutputAdapter<O> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (O _Nullable)insertReqMetaBody:(O _Nullable)body m:(Kotlin_libraryReqMeta *)m __attribute__((swift_name("insertReqMeta(body:m:)")));
- (O _Nullable)insertRspMetaBody:(O _Nullable)body m:(Kotlin_libraryRspMeta *)m __attribute__((swift_name("insertRspMeta(body:m:)")));
@end;

__attribute__((swift_name("ReqHandler")))
@interface Kotlin_libraryReqHandler<I, O> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (Kotlin_libraryOutputSrc<O> *)handleBody:(I _Nullable)body __attribute__((swift_name("handle(body:)")));
@end;

__attribute__((swift_name("RspHandler")))
@interface Kotlin_libraryRspHandler<I> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)handleRsp:(Kotlin_libraryRsp<I> *)rsp __attribute__((swift_name("handle(rsp:)")));
@end;

__attribute__((swift_name("TransportAdapter")))
@interface Kotlin_libraryTransportAdapter<O> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)sendBody:(O _Nullable)body __attribute__((swift_name("send(body:)")));
@end;

__attribute__((swift_name("LogDst")))
@protocol Kotlin_libraryLogDst
@required
- (void)logLogLvl:(Kotlin_libraryLogLvl *)logLvl msg:(NSString *)msg __attribute__((swift_name("log(logLvl:msg:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLvl")))
@interface Kotlin_libraryLogLvl : Kotlin_libraryKotlinEnum<Kotlin_libraryLogLvl *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kotlin_libraryLogLvl *debug __attribute__((swift_name("debug")));
+ (Kotlin_libraryKotlinArray<Kotlin_libraryLogLvl *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("OutputSrc")))
@interface Kotlin_libraryOutputSrc<O> : Kotlin_libraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (O _Nullable)tryTake __attribute__((swift_name("tryTake()")));
@end;

__attribute__((swift_name("MutableOutputSrc")))
@interface Kotlin_libraryMutableOutputSrc<O> : Kotlin_libraryOutputSrc<O>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)putOutput:(O _Nullable)output __attribute__((swift_name("put(output:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleImmutableOutputSrc")))
@interface Kotlin_librarySimpleImmutableOutputSrc<O> : Kotlin_libraryOutputSrc<O>
- (instancetype)initWithOutput:(O _Nullable)output __attribute__((swift_name("init(output:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (O _Nullable)tryTake __attribute__((swift_name("tryTake()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleMutableOutputSrc")))
@interface Kotlin_librarySimpleMutableOutputSrc<O> : Kotlin_libraryMutableOutputSrc<O>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)putOutput:(O _Nullable)output __attribute__((swift_name("put(output:)")));
- (O _Nullable)tryTake __attribute__((swift_name("tryTake()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReqMeta")))
@interface Kotlin_libraryReqMeta : Kotlin_libraryBase
- (instancetype)initWithReqId:(NSString * _Nullable)reqId reqCnt:(Kotlin_libraryLong * _Nullable)reqCnt __attribute__((swift_name("init(reqId:reqCnt:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (Kotlin_libraryLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Kotlin_libraryReqMeta *)doCopyReqId:(NSString * _Nullable)reqId reqCnt:(Kotlin_libraryLong * _Nullable)reqCnt __attribute__((swift_name("doCopy(reqId:reqCnt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Kotlin_libraryLong * _Nullable reqCnt __attribute__((swift_name("reqCnt")));
@property (readonly) NSString * _Nullable reqId __attribute__((swift_name("reqId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rsp")))
@interface Kotlin_libraryRsp<I> : Kotlin_libraryBase
- (instancetype)initWithResult:(Kotlin_libraryRspResult *)result body:(I _Nullable)body ts:(int64_t)ts __attribute__((swift_name("init(result:body:ts:)"))) __attribute__((objc_designated_initializer));
- (Kotlin_libraryRspResult *)component1 __attribute__((swift_name("component1()")));
- (I _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (Kotlin_libraryRsp<I> *)doCopyResult:(Kotlin_libraryRspResult *)result body:(I _Nullable)body ts:(int64_t)ts __attribute__((swift_name("doCopy(result:body:ts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) I _Nullable body __attribute__((swift_name("body")));
@property (readonly) Kotlin_libraryRspResult *result __attribute__((swift_name("result")));
@property (readonly) int64_t ts __attribute__((swift_name("ts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RspMeta")))
@interface Kotlin_libraryRspMeta : Kotlin_libraryBase
- (instancetype)initWithRspReqId:(NSString * _Nullable)rspReqId rspReqCnt:(Kotlin_libraryLong * _Nullable)rspReqCnt rspCnt:(Kotlin_libraryLong * _Nullable)rspCnt __attribute__((swift_name("init(rspReqId:rspReqCnt:rspCnt:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (Kotlin_libraryLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (Kotlin_libraryLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (Kotlin_libraryRspMeta *)doCopyRspReqId:(NSString * _Nullable)rspReqId rspReqCnt:(Kotlin_libraryLong * _Nullable)rspReqCnt rspCnt:(Kotlin_libraryLong * _Nullable)rspCnt __attribute__((swift_name("doCopy(rspReqId:rspReqCnt:rspCnt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Kotlin_libraryLong * _Nullable rspCnt __attribute__((swift_name("rspCnt")));
@property (readonly) Kotlin_libraryLong * _Nullable rspReqCnt __attribute__((swift_name("rspReqCnt")));
@property (readonly) NSString * _Nullable rspReqId __attribute__((swift_name("rspReqId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RspResult")))
@interface Kotlin_libraryRspResult : Kotlin_libraryKotlinEnum<Kotlin_libraryRspResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kotlin_libraryRspResult *ok __attribute__((swift_name("ok")));
@property (class, readonly) Kotlin_libraryRspResult *rspTimeout __attribute__((swift_name("rspTimeout")));
+ (Kotlin_libraryKotlinArray<Kotlin_libraryRspResult *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Kotlin_libraryKotlinEnumCompanion : Kotlin_libraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Kotlin_libraryKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Kotlin_libraryKotlinArray<T> : Kotlin_libraryBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Kotlin_libraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Kotlin_libraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Kotlin_libraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
