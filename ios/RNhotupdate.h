#import <React/RCTReloadCommand.h>
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRNhotupdateSpec.h"

@interface RNhotupdate : NSObject <NativeRNhotupdateSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RNhotupdate : NSObject <RCTBridgeModule>
#endif
+ (NSURL *)getBundle;
@end
