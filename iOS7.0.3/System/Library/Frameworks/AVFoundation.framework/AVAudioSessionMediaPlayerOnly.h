/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) <AVAudioSessionDelegateMediaPlayerOnly> * delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) int currentHardwareInputNumberOfChannels; 
@property (readonly) int currentHardwareOutputNumberOfChannels; 
+(void)initialize;
-(id)_weakReference;
-(void)_removeFPListeners;
-(void)_addFPListeners;
-(void)_setFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(BOOL)setActive:(BOOL)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(BOOL)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(int)currentHardwareInputNumberOfChannels;
-(int)currentHardwareOutputNumberOfChannels;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)isApplicationAudioSession;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)mode;
-(id)category;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(double)preferredIOBufferDuration;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
@end

