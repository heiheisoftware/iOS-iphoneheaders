/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class NSString;

@interface COSInternationalLanguageSetupController : PSSetupController {

	NSString* _languageToSet;

}

@property (nonatomic,copy) NSString * languageToSet;              //@synthesize languageToSet=_languageToSet - In the implementation block
-(void)setLanguageToSet:(NSString *)arg1 ;
-(NSString *)languageToSet;
-(int)preferredStatusBarStyle;
-(void)commit;
-(void)setupController;
-(char)useOfficialLanguages;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
@end

