/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingIndicatorLayer;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingIndicatorLayer* _typingIndicatorLayer;

}

@property (nonatomic,retain) CKTypingIndicatorLayer * typingIndicatorLayer;              //@synthesize typingIndicatorLayer=_typingIndicatorLayer - In the implementation block
+(CGSize)indicatorSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingIndicatorLayer:(id)arg1 ;
-(id)typingIndicatorLayer;
-(void)configureForRowObject:(id)arg1 ;
@end
