/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKRenderingExporter <TSKExporter>
@required
-(CGRect*)boundsRect;
-(CGRect*)unscaledClipRect;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(float)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned)arg1;
-(double)progressForCurrentPage;
-(BOOL)setInfosToCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned)arg2 delegate:(id)arg3 error:(id*)arg4;
-(id)imager;
-(void)setPaginate:(BOOL)arg1;
-(BOOL)paginate;
-(BOOL)hasMoreThanOnePageToPrint;
-(unsigned)pageCount;
-(void)teardown;
-(void)setup;
@end

