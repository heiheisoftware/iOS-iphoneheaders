/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _id_str;
	NSURL* _objectID;

}

@property (nonatomic,retain) NSString * id_str;              //@synthesize id_str=_id_str - In the implementation block
@property (nonatomic,retain) NSURL * objectID;               //@synthesize objectID=_objectID - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(id)userRecordWithScreenName:(id)arg1 ;
+(bool)supportsSecureCoding;
-(void)setObjectID:(id)arg1 ;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setId_str:(id)arg1 ;
-(id)id_str;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(id)objectID;
@end

