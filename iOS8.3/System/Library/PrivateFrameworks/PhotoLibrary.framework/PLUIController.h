/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:00:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UITransitionView, NSDictionary;

@interface PLUIController : NSObject {

	id _delegate;
	UITransitionView* _fullScreenTransitionView;
	NSDictionary* _configuration;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setConfiguration:(id)arg1 ;
-(id)configuration;
-(id)contentViewWithFrame:(CGRect)arg1 ;
@end
