/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoprefsyncd/nanoprefsyncd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanoprefsyncd/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPSUserDefaultsMsg : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _domain;
	NSMutableArray* _keys;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;              //@synthesize keys=_keys - In the implementation block
-(void)setKeys:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(unsigned)keysCount;
-(void)clearKeys;
-(void)setDomain:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
