/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMUSymbolExtractor.h>

@interface VMUDebugMapExtractor : VMUSymbolExtractor
+(id)debugMapExtractorWithMachOHeader:(id)arg1 ;
-(id)initWithMachOHeader:(id)arg1 ;
-(void)readDebugMapsFromMachOHeader:(id)arg1 nsyms:(unsigned)arg2 nlist:(id)arg3 stringTable:(id)arg4 ;
@end
