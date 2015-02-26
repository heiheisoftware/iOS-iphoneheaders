/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSWPHeaderFooterProvider <NSObject>
@required
-(BOOL)isHeaderFooterEmpty:(int)arg1;
-(BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
-(BOOL)usesSingleHeaderFooter;
-(int)headerFooterTypeForModel:(id)arg1;
-(int)headerFragmentIndexForModel:(id)arg1;
-(id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
-(id)headerFooterFragmentEnumerator;
-(double)bodyWidth;
-(id)documentRoot;

@end
