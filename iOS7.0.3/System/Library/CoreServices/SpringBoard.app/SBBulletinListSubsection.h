/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinListSubsection : NSObject {

	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	NSString* _subsectionID;

}

@property (nonatomic,readonly) NSString * subsectionID;              //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                 //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;               //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
-(id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2 ;
-(void)dealloc;
-(BOOL)showsMessagePreview;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(id)subsectionID;
-(BOOL)showsInLockScreen;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
@end
