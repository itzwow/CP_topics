# STEP 1 - Make a Discord Webhook

1. Go to the Discord channel in which you would like to send issues notification.

2. In the settings for that channel, find the Webhooks option and create a new webhook. <br><br>
  **NOTE:** Do NOT give this URL out to the public. Anyone or service can post messages to this channel, without even needing to be in the server. Keep it safe!
![WebhookDiscord](https://user-images.githubusercontent.com/84179065/198658970-6c5e5e62-c857-4b23-8759-2453ebf0c268.JPG)

# STEP 2 - Set up the webhook on Github

1. Navigate to your repository on Github, and open the Settings
![Settings](https://user-images.githubusercontent.com/84179065/198661538-3f894551-036f-4e31-b256-af8097288106.JPG)


2. Select Add Webhook <br>
![Add Webhook](https://user-images.githubusercontent.com/84179065/198669066-3b839ec5-8e77-4368-8ecb-e377eadbfc47.jpg)
<br><br>

3. Paste in the webhook url and append `/github` to the end. Select the content type as `application/json` 
![WebhookSettings](https://user-images.githubusercontent.com/84179065/198672583-d6a8c8d7-d5cc-421c-a847-e7375e5b6f64.png)


4. Select "Let me select individual events" and check the "Issues" box
![Issues](https://user-images.githubusercontent.com/84179065/198673190-fc8e5a5a-0212-49fb-a7d0-19f4f05e4db2.JPG)

5. Save and update the Webhook. Test it by creating a new issue!You should get Notification like this
![Notification](https://user-images.githubusercontent.com/84179065/198673838-dcc28e4f-bc12-42a6-a6dc-49d0a4358cb4.jpg)

