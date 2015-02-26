/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface PerformAutoUpdatesOperation : ISOperation {

	NSArray* _updates;

}
-(id)_newUpdateWithStoreItemData:(id)arg1 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 ;
-(void)_scheduleCellularTransitionsAfterTime:(double)arg1 ;
-(id)_newBTAJobWithStartTime:(double)arg1 interval:(double)arg2 ;
-(id)initWithUpdates:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)updates;
@end
