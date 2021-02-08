//
//  SimpleSDKCore.h
//  SimpleSDKCore
//
//  Created by qus on 2021/2/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef void(^SimpleCallback)(bool isSuccess, NSString* msg);


@interface SimpleSDKCore : NSObject

+ (instancetype)sharedInstance;

- (void)SDKInit:(SimpleCallback) cb;

- (void)SDKInitWithString:(NSString *) jsonStr callback:(SimpleCallback)cb;

- (NSNumber *)getNetworkStatus;

- (void)log;

@end

NS_ASSUME_NONNULL_END
//
////! Project version number for SimpleSDKCore.
//FOUNDATION_EXPORT double SimpleSDKCoreVersionNumber;
//
////! Project version string for SimpleSDKCore.
//FOUNDATION_EXPORT const unsigned char SimpleSDKCoreVersionString[];
//
//// In this header, you should import all the public headers of your framework using statements like #import <SimpleSDKCore/PublicHeader.h>


