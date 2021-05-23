

@class MagoRnKakao;

@interface MagoRnKakao : NSObject
- (MagoRnKakao *)returnSwiftClassInstance;
+ (BOOL)isKakaoTalkLoginUrl:(NSURL *)url;
+ (BOOL)handleOpenUrl:(NSURL *)url;
@end
