/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class NSString;

@interface TSPDocumentRevision : NSObject <NSCopying> {

	unsigned long long _sequence;
	NSString* _identifier;

}

@property (nonatomic,readonly) unsigned long long sequence;              //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * revisionString; 
+(id)revisionWithSequence:(unsigned long long)arg1 identifier:(id)arg2 ;
+(id)revisionWithRevisionString:(id)arg1 ;
-(id)initWithSequence:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)nextRevisionWithIdentifier:(id)arg1 ;
-(id)initWithRevisionString:(id)arg1 ;
-(NSString *)revisionString;
-(unsigned long long)sequence;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

