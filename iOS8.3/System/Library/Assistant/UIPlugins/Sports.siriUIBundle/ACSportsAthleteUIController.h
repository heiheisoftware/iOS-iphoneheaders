/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsUIController.h>

@class SAUISnippet;

@interface ACSportsAthleteUIController : ACSportsUIController {

	SAUISnippet* _snippet;

}
+(id)listViewWithSnippet:(id)arg1 frame:(CGRect)arg2 ;
-(void)setSnippet:(id)arg1 ;
-(id)snippet;
-(id)initWithSnippet:(id)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
@end
