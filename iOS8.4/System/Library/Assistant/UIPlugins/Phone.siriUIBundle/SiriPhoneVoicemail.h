/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/SiriPhoneCall.h>

@class SAPhoneVoiceMail, NSURL;

@interface SiriPhoneVoicemail : SiriPhoneCall {

	SAPhoneVoiceMail* _voicemail;

}

@property (nonatomic,retain) SAPhoneVoiceMail * voicemail;              //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,readonly) NSURL * identifier; 
-(void)_setFormattedDuration;
-(id)statusImage;
-(NSURL *)identifier;
-(id)date;
-(SAPhoneVoiceMail *)voicemail;
-(void)setVoicemail:(SAPhoneVoiceMail *)arg1 ;
@end

