/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/UsageBundles/MailUsage.bundle/MailUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(float)sizeForCategory:(id)arg1;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(BOOL)allowDeletionForCategory:(id)arg1;

@end
