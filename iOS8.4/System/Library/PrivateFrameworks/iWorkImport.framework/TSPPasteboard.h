/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoder.h>

@class NSString, NSArray;

@interface TSPPasteboard : NSObject <TSPDecoder> {

	id _pasteboard;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,readonly) NSArray * strings; 
@property (nonatomic,readonly) NSArray * richTextStrings; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,readonly) BOOL isSmartCopy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stylePasteboard;
+(id)activePasteboardsQueue;
+(id)activePasteboards;
+(Class)pasteboardClass;
+(id)activePasteboardForName:(id)arg1 ;
+(id)pasteboardWithPasteboard:(id)arg1 ;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
-(BOOL)fromExcelDataSource;
-(BOOL)fromIWorkSageDataSource;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(long long)clearContents;
-(void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2 ;
-(BOOL)containsNativePasteboardTypes;
-(id)initWithGeneralPasteboard;
-(id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2 ;
-(id)initWithUniquePasteboardName;
-(id)initWithNativePasteboard:(id)arg1 ;
-(NSArray *)richTextStrings;
-(BOOL)containsAnyPasteboardTypeInArray:(id)arg1 ;
-(void)performAsynchronousWriteUsingBlock:(/*^block*/id)arg1 ;
-(void)addData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)importableRichTextTypes;
-(id)importableImageTypes;
-(id)importablePlainTextTypes;
-(BOOL)containsImportableRichTextTypes;
-(BOOL)containsImportableTextTypes;
-(BOOL)isSmartCopy;
-(NSString *)description;
-(NSString *)name;
-(oneway void)invalidate;
-(NSString *)string;
-(long long)changeCount;
-(void)setString:(NSString *)arg1 ;
-(long long)numberOfItems;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSArray *)strings;
-(NSArray *)URLs;
@end

