/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>

@class MFMailMessage, MessageContentAreaLayer, ComposeNavigationController;

@interface BufferedMessageView : UIView <MFMessageViewingContextDelegate> {

	MFMailMessage* _message;
	MessageContentAreaLayer* _messageLayer;
	ComposeNavigationController* _composeViewController;
	id _delegate;
	unsigned _messageIsDraft : 1;
	unsigned _messageDidDraw : 1;
	unsigned _hasBlankImage : 1;
	unsigned _hasMessageImage : 1;
	unsigned _frozen : 1;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic) id delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFMailMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL frozen; 
-(id)initWithFrame:(CGRect)arg1 message:(id)arg2 ;
-(BOOL)isMessageLoaded;
-(void)loadMessage;
-(BOOL)hasBlankImage;
-(void)messageDidDraw:(id)arg1 ;
-(void)messageDidFirstVisuallyNonEmptyDraw:(id)arg1 ;
-(id)viewToSnapshot;
-(BOOL)frozen;
-(void)setIsTopUpdatePriority:(BOOL)arg1 ;
-(void)updateOnce;
-(void)memoryWarning:(id)arg1 ;
-(void)messageViewingContextContentLoadCompleted:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setFrozen:(BOOL)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)updateImage;
-(void)clearMessage;
@end
