/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, SKUIArtwork;

@interface SKUIGiftCharity : NSObject {

	NSString* _amountDisclaimer;
	NSArray* _amounts;
	NSString* _description;
	NSString* _identifier;
	NSString* _legalText;
	NSString* _legalText2;
	SKUIArtwork* _logoArtwork;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * amountDisclaimer;                //@synthesize amountDisclaimer=_amountDisclaimer - In the implementation block
@property (nonatomic,readonly) NSString * charityDescription;              //@synthesize description=_description - In the implementation block
@property (nonatomic,readonly) NSString * legalText;                       //@synthesize legalText=_legalText - In the implementation block
@property (nonatomic,readonly) NSString * legalText2;                      //@synthesize legalText2=_legalText2 - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * donationAmounts;                  //@synthesize amounts=_amounts - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * logoArtwork;                  //@synthesize logoArtwork=_logoArtwork - In the implementation block
-(NSString *)name;
-(NSString *)identifier;
-(SKUIArtwork *)logoArtwork;
-(id)initWithCharityDictionary:(id)arg1 ;
-(NSString *)amountDisclaimer;
-(NSString *)charityDescription;
-(NSArray *)donationAmounts;
-(NSString *)legalText;
-(NSString *)legalText2;
@end

