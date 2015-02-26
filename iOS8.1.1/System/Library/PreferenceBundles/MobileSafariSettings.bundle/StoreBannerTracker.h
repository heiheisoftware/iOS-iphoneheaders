/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface StoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedTracker;
-(void)save;
-(id)init;
-(void)load;
-(void)clear;
-(id)filePath;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end
