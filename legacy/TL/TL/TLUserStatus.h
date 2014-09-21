#import <Foundation/Foundation.h>

#import "TLObject.h"
#import "TLMetaRpc.h"


@interface TLUserStatus : NSObject <TLObject>


@end

@interface TLUserStatus$userStatusEmpty : TLUserStatus


@end

@interface TLUserStatus$userStatusOnline : TLUserStatus

@property (nonatomic) int32_t expires;

@end

@interface TLUserStatus$userStatusOffline : TLUserStatus

@property (nonatomic) int32_t was_online;

@end
