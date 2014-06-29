/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreMediaPlayerNotificationHelper : NSObject {

	MediaPlayerPrivateIOS* _client;
	bool _deferredPropertiesScheduled;

}
-(void)disconnect;
-(id)initWithClient:(MediaPlayerPrivateIOS*)arg1 ;
-(void)cancelPendingRequests;
-(void)schedulePrepareToPlayWithOptionalDelay:(id)arg1 ;
-(void)scheduleDeferredPropertiesWithOptionalDelay:(id)arg1 ;
-(void)delayNotification:(int)arg1 ;
-(void)deliverNotification:(id)arg1 ;
-(void)pluginElementInBandAlternateTextTracksDidChange:(id)arg1 ;
-(void)pluginElementDidSelectTextTrack:(id)arg1 ;
-(void)pluginElementDidOutputAttributedStrings:(id)arg1 nativeSampleBuffers:(id)arg2 forTime:(double)arg3 ;
@end
