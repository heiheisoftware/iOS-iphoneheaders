/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <vot/VOTOutputComponent.h>

@class NSMutableDictionary, AXAccessQueue;

@interface VOTOutputSoundComponent : VOTOutputComponent {

	NSMutableDictionary* _cachedSounds;
	float _volume;
	AXAccessQueue* _soundAccessQueue;

}
-(void)playSoundFast:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handlePerformAction:(id)arg1 ;
-(void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2 ;
-(id)_findSound:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
@end
