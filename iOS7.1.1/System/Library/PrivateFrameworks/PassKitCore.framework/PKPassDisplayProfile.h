/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : NSObject <NSSecureCoding, NSCopying> {

	bool _tallCode;
	unsigned long long _passStyle;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _iconHash;
	NSData* _logoHash;
	NSData* _thumbnailHash;
	NSData* _backgroundHash;
	NSData* _stripHash;
	long long _layoutMode;

}

@property (assign,nonatomic) unsigned long long passStyle;              //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                      //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * iconHash;                         //@synthesize iconHash=_iconHash - In the implementation block
@property (nonatomic,retain) NSData * logoHash;                         //@synthesize logoHash=_logoHash - In the implementation block
@property (nonatomic,retain) NSData * thumbnailHash;                    //@synthesize thumbnailHash=_thumbnailHash - In the implementation block
@property (nonatomic,retain) NSData * backgroundHash;                   //@synthesize backgroundHash=_backgroundHash - In the implementation block
@property (nonatomic,retain) NSData * stripHash;                        //@synthesize stripHash=_stripHash - In the implementation block
@property (assign,nonatomic) bool tallCode;                             //@synthesize tallCode=_tallCode - In the implementation block
@property (nonatomic,readonly) long long layoutMode;                    //@synthesize layoutMode=_layoutMode - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)foregroundColor;
-(void)setForegroundColor:(id)arg1 ;
-(unsigned long long)passStyle;
-(bool)tallCode;
-(id)backgroundHash;
-(id)stripHash;
-(id)logoHash;
-(id)thumbnailHash;
-(id)iconHash;
-(void)setPassStyle:(unsigned long long)arg1 ;
-(void)setStripColor:(id)arg1 ;
-(void)setTallCode:(bool)arg1 ;
-(void)setIconHash:(id)arg1 ;
-(void)setLogoHash:(id)arg1 ;
-(void)setThumbnailHash:(id)arg1 ;
-(void)setBackgroundHash:(id)arg1 ;
-(void)setStripHash:(id)arg1 ;
-(id)stripColor;
-(id)initWithPassDictionary:(id)arg1 passURL:(id)arg2 ;
-(bool)showsBackgroundImage;
-(bool)showsStripImage;
-(long long)layoutMode;
-(id)labelColor;
-(void)setLabelColor:(id)arg1 ;
@end
