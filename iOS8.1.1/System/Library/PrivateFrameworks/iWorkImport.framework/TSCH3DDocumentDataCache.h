/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSKDocumentRoot;

@interface TSCH3DDocumentDataCache : NSObject {

	TSKDocumentRoot* mDocumentRoot;

}
+(id)dataFromCache:(id)arg1 forFile:(id)arg2 group:(id)arg3 generateBlock:(/*^block*/id)arg4 ;
+(id)dataCacheWithDocumentRoot:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)dataForFile:(id)arg1 group:(id)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)debug_nukeDocumentCachePathForGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
