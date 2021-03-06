//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIImage, ZBarReaderView, ZBarSymbolSet;

@protocol ZBarReaderViewDelegate <NSObject>
- (void)readerView:(ZBarReaderView *)arg1 didReadSymbols:(ZBarSymbolSet *)arg2 fromImage:(UIImage *)arg3;

@optional
- (void)readerView:(ZBarReaderView *)arg1 didStopWithError:(NSError *)arg2;
- (void)readerViewDidStart:(ZBarReaderView *)arg1;
@end

