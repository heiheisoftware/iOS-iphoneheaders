/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <StoreKitUI/NSCopying.h>

@class IKColor;

@interface SKUIGridViewGradientLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	IKColor* _gradientColor;

}

@property (nonatomic,retain) IKColor * gradientColor;              //@synthesize gradientColor=_gradientColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGradientColor:(IKColor *)arg1 ;
-(IKColor *)gradientColor;
@end
