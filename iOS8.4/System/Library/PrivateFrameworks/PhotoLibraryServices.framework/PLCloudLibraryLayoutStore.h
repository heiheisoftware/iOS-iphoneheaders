/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudLibraryLayoutConfiguration;

@interface PLCloudLibraryLayoutStore : NSObject {

	PLCloudLibraryLayoutConfiguration* _config;

}
+(void)validateConfiguration:(id)arg1 ;
-(unsigned long long)includeAsset:(id)arg1 ;
-(unsigned long long)excludeAsset:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)resetStore;
-(void)enumerateCategoriesWithBlock:(/*^block*/id)arg1 ;
@end
