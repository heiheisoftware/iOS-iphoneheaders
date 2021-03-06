/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL, NSArray;

@interface SBManyApplicationsAlertItem : SBAlertItem {

	NSURL* _url;
	NSArray* _applications;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSArray * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy,readonly) id completion;                         //@synthesize completion=_completion - In the implementation block
-(id)initWithURL:(id)arg1 applications:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)completion;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(NSArray *)applications;
@end

