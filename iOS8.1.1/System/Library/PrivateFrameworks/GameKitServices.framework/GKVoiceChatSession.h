/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GKVoiceChatSession : NSObject {

	id opaqueSession;

}

@property (assign) id<GKVoiceChatSessionDelegate> delegate; 
@property (readonly) NSString * sessionName; 
@property (readonly) NSArray * peerList; 
@property (getter=isActiveSession) BOOL activeSession; 
@property (readonly) float inputMeter; 
@property (assign) float sessionVolume; 
-(void)dealloc;
-(void)setDelegate:(id<GKVoiceChatSessionDelegate>)arg1 ;
-(id<GKVoiceChatSessionDelegate>)delegate;
-(float)inputMeter;
-(void)stopSession;
-(void)setMute:(BOOL)arg1 forPeer:(id)arg2 ;
-(BOOL)getMuteStateForPeer:(id)arg1 ;
-(NSArray *)peerList;
-(BOOL)isActiveSession;
-(void)setActiveSession:(BOOL)arg1 ;
-(float)sessionVolume;
-(void)setSessionVolume:(float)arg1 ;
-(id)initWithGKSession:(id)arg1 sessionName:(id)arg2 ;
-(float)outputMeterForPeer:(id)arg1 ;
-(NSString *)sessionName;
-(void)startSession;
@end
