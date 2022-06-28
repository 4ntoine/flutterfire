// Autogenerated from Pigeon (v3.2.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class PigeonMultiFactorSession;
@class PigeonPhoneMultiFactorAssertion;
@class PigeonMultiFactorInfo;

@interface PigeonMultiFactorSession : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithId:(NSString *)id;
@property(nonatomic, copy) NSString * id;
@end

@interface PigeonPhoneMultiFactorAssertion : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithVerificationId:(NSString *)verificationId
    verificationCode:(NSString *)verificationCode;
@property(nonatomic, copy) NSString * verificationId;
@property(nonatomic, copy) NSString * verificationCode;
@end

@interface PigeonMultiFactorInfo : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithDisplayName:(nullable NSString *)displayName
    enrollmentTimestamp:(NSNumber *)enrollmentTimestamp
    factorId:(NSString *)factorId
    uid:(NSString *)uid
    phoneNumber:(nullable NSString *)phoneNumber;
@property(nonatomic, copy, nullable) NSString * displayName;
@property(nonatomic, strong) NSNumber * enrollmentTimestamp;
@property(nonatomic, copy) NSString * factorId;
@property(nonatomic, copy) NSString * uid;
@property(nonatomic, copy, nullable) NSString * phoneNumber;
@end

/// The codec used by MultiFactorUserHostApi.
NSObject<FlutterMessageCodec> *MultiFactorUserHostApiGetCodec(void);

@protocol MultiFactorUserHostApi
- (void)enrollPhoneAppName:(NSString *)appName assertion:(PigeonPhoneMultiFactorAssertion *)assertion displayName:(nullable NSString *)displayName completion:(void(^)(FlutterError *_Nullable))completion;
- (void)getSessionAppName:(NSString *)appName completion:(void(^)(PigeonMultiFactorSession *_Nullable, FlutterError *_Nullable))completion;
@end

extern void MultiFactorUserHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<MultiFactorUserHostApi> *_Nullable api);

/// The codec used by MultiFactoResolverHostApi.
NSObject<FlutterMessageCodec> *MultiFactoResolverHostApiGetCodec(void);

@protocol MultiFactoResolverHostApi
- (void)resolveSignInResolverId:(NSString *)resolverId assertion:(PigeonPhoneMultiFactorAssertion *)assertion completion:(void(^)(NSDictionary<NSString *, id> *_Nullable, FlutterError *_Nullable))completion;
@end

extern void MultiFactoResolverHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<MultiFactoResolverHostApi> *_Nullable api);

/// The codec used by GenerateInterfaces.
NSObject<FlutterMessageCodec> *GenerateInterfacesGetCodec(void);

@protocol GenerateInterfaces
- (void)generateInterfacesInfo:(PigeonMultiFactorInfo *)info error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void GenerateInterfacesSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<GenerateInterfaces> *_Nullable api);

NS_ASSUME_NONNULL_END
