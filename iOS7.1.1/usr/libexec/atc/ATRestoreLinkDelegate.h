/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/atc
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATRestoreLinkDelegate <NSObject>
@required
-(void)restoreCanceled;
-(void)restoreInProgress;
-(void)restoredAsset:(id)arg1 successfully:(BOOL)arg2 withError:(id)arg3;
-(void)restoreAsset:(id)arg1 updatedProgress:(float)arg2;
-(id)workQueue;
@end
