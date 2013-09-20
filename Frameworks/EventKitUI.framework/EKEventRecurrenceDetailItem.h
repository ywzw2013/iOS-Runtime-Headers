/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventDetailRecurrenceCell, NSDate, NSString;

@interface EKEventRecurrenceDetailItem : EKEventDetailItem {
    EKEventDetailRecurrenceCell *_cell;
    NSString *_customRepeatDescription;
    BOOL _indent;
    int _originalRepeatType;
    NSDate *_repeatEnd;
    int _repeatType;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end