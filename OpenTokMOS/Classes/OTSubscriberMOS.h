//
//  OTSubscriberMOS.h
//  OpenTokMOS
//
//  Created by Charley Robinson on 12/5/16.
//  Copyright © 2016 TokBox, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OTSubscriberKit;

@interface OTSubscriberMOS : NSObject <OTSubscriberKitNetworkStatsDelegate>

- (instancetype)initWithSubscriber:(OTSubscriberKit*)subscriber;

- (double)videoScore;
- (double)audioScore;
- (double)qualityScore;

@end
